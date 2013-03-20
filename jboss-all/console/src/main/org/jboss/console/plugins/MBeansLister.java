/*
 * JBoss, the OpenSource J2EE webOS
 *
 * Distributable under LGPL license.
 * See terms of license at gnu.org.
 */

package org.jboss.console.plugins;

import java.util.ArrayList;
import java.util.Iterator;

import org.jboss.console.manager.interfaces.ManageableResource;
import org.jboss.console.manager.interfaces.TreeNode;
import org.jboss.console.manager.interfaces.TreeNodeMenuEntry;
import org.jboss.console.plugins.helpers.AbstractPluginWrapper;
import org.jboss.console.plugins.helpers.jmx.Server;
import org.jboss.console.plugins.helpers.jmx.DomainData;
import org.jboss.console.plugins.helpers.jmx.MBeanData;
/**
 * As the number of MBeans is very big, we use a real Java class which is far
 * faster than beanshell
 *
 * @see <related>
 *
 * @author  <a href="mailto:sacha.labourey@cogito-info.ch">Sacha Labourey</a>.
 * @version $Revision: 1.1.2.1 $
 *
 * <p><b>Revisions:</b>
 *
 * <p><b>2 janv. 2003 Sacha Labourey:</b>
 * <ul>
 * <li> First implementation </li>
 * </ul>
 */
public class MBeansLister 
   extends AbstractPluginWrapper
{

   public MBeansLister () { super(); }
   
   TreeNode createJmxMBeanSubResources (MBeanData data) throws Exception
   {
      String name = "" + data.getObjectName();
      String displayName = data.getName ();
            
      if (displayName == null)
      {
         // Get ride of the domain name because it is already is the header
         int index = name.indexOf( ":" );
         displayName = ( index >= 0 ) ? name.substring( index + 1 ) : name;
      }
      
      return createTreeNode ( 
            displayName, // name
            name, // description
            "images/server.gif", // Icon URL
            "/jmx-console/HtmlAdaptor?action=inspectMBean&name=" + encode(name), // Default URL
            null,
            null,
            null
            //name,
            //data.getClassName() TOO HEAVY TO GENERATE RESOURCE LOOKUP FOR EACH MBEAN!
         );
   }   
   
   TreeNode[] createJmxDomainsSubNodes ()  throws Exception
   {
      Iterator mbeans = Server.getDomainData(null);
      
      TreeNode[] result = null;
      
      ArrayList domains = new ArrayList ();            
            
      while( mbeans.hasNext() )
      {
         DomainData domainData = (DomainData) mbeans.next();         
         String domainName = domainData.getDomainName();
         MBeanData[] data = domainData.getData();                                    
         TreeNode[] subResources = new TreeNode[data.length];
         
         for(int d = 0; d < data.length; d ++)
         {
            subResources[d] = createJmxMBeanSubResources (data[d]);
         }

         TreeNodeMenuEntry[] menu = createMenus (new String[] 
            {
               "Number of MBeans: " + data.length, null,
            }
         );
         
         domains.add(createTreeNode (
               domainName, // name
               "MBeans for domain " + domainName, // description
               "images/serviceset.gif", // Icon URL
               null, // Default URL
               menu, // menu
               subResources, // sub nodes
               null   // Sub-Resources                  
            )
         );       
         
      }
      
      if (domains.size() == 0)
      {
         result = null;
      }
      else
      {
         result = (TreeNode[]) domains.toArray(new TreeNode[domains.size()]);
      }
      
      return result;                                                  
   }
   
   protected TreeNode getTreeForResource(String profile, ManageableResource resource)
   {
      try
      {
         return createTreeNode (
               "JMX MBeans", // name
               "Display all JMX MBeans", // description
               "images/flash.gif", // Icon URL
               null, // Default URL
               null,
               createJmxDomainsSubNodes (), // sub nodes
               null   // Sub-Resources                  
            );            
      }
      catch (Exception e)
      {
         e.printStackTrace ();
         return null;
      }
   }
}
