<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN""http://www.w3.org/TR/REC-html40/loose.dtd">
<!--NewPage-->
<HTML>
<HEAD>
<!-- Generated by javadoc on Sun Aug 11 17:19:40 CEST 2002 -->
<TITLE>
TagData (Servlet and JavaServer Pages API Documentation)
</TITLE>
<LINK REL ="stylesheet" TYPE="text/css" HREF="../../../../stylesheet.css" TITLE="Style">
</HEAD>
<SCRIPT>
function asd()
{
parent.document.title="TagData (Servlet and JavaServer Pages API Documentation)";
}
</SCRIPT>
<BODY BGCOLOR="white" onload="asd();">

<!-- ========== START OF NAVBAR ========== -->
<A NAME="navbar_top"><!-- --></A>
<TABLE BORDER="0" WIDTH="100%" CELLPADDING="1" CELLSPACING="0">
<TR>
<TD COLSPAN=3 BGCOLOR="#EEEEFF" CLASS="NavBarCell1">
<A NAME="navbar_top_firstrow"><!-- --></A>
<TABLE BORDER="0" CELLPADDING="0" CELLSPACING="3">
  <TR ALIGN="center" VALIGN="top">
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../../overview-summary.html"><FONT CLASS="NavBarFont1"><B>Overview</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="package-summary.html"><FONT CLASS="NavBarFont1"><B>Package</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#FFFFFF" CLASS="NavBarCell1Rev"> &nbsp;<FONT CLASS="NavBarFont1Rev"><B>Class</B></FONT>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="class-use/TagData.html"><FONT CLASS="NavBarFont1"><B>Use</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="package-tree.html"><FONT CLASS="NavBarFont1"><B>Tree</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../../deprecated-list.html"><FONT CLASS="NavBarFont1"><B>Deprecated</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../../index-all.html"><FONT CLASS="NavBarFont1"><B>Index</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../../help-doc.html"><FONT CLASS="NavBarFont1"><B>Help</B></FONT></A>&nbsp;</TD>
  </TR>
</TABLE>
</TD>
<TD ALIGN="right" VALIGN="top" ROWSPAN=3><EM>
</EM>
</TD>
</TR>

<TR>
<TD BGCOLOR="white" CLASS="NavBarCell2"><FONT SIZE="-2">
&nbsp;<A HREF="../../../../javax/servlet/jsp/tagext/TagAttributeInfo.html"><B>PREV CLASS</B></A>&nbsp;
&nbsp;<A HREF="../../../../javax/servlet/jsp/tagext/TagExtraInfo.html"><B>NEXT CLASS</B></A></FONT></TD>
<TD BGCOLOR="white" CLASS="NavBarCell2"><FONT SIZE="-2">
  <A HREF="../../../../index.html" TARGET="_top"><B>FRAMES</B></A>  &nbsp;
&nbsp;<A HREF="TagData.html" TARGET="_top"><B>NO FRAMES</B></A>  &nbsp;
&nbsp;
<SCRIPT>
  <!--
  if(window==top) {
    document.writeln('<A HREF="../../../../allclasses-noframe.html" TARGET=""><B>All Classes</B></A>');
  }
  //-->
</SCRIPT>
<NOSCRIPT>
<A HREF="../../../../allclasses-noframe.html" TARGET=""><B>All Classes</B></A>
</NOSCRIPT>
</FONT></TD>
</TR>
<TR>
<TD VALIGN="top" CLASS="NavBarCell3"><FONT SIZE="-2">
  SUMMARY:&nbsp;NESTED&nbsp;|&nbsp;<A HREF="#field_summary">FIELD</A>&nbsp;|&nbsp;<A HREF="#constructor_summary">CONSTR</A>&nbsp;|&nbsp;<A HREF="#method_summary">METHOD</A></FONT></TD>
<TD VALIGN="top" CLASS="NavBarCell3"><FONT SIZE="-2">
DETAIL:&nbsp;<A HREF="#field_detail">FIELD</A>&nbsp;|&nbsp;<A HREF="#constructor_detail">CONSTR</A>&nbsp;|&nbsp;<A HREF="#method_detail">METHOD</A></FONT></TD>
</TR>
</TABLE>
<!-- =========== END OF NAVBAR =========== -->

<HR>
<!-- ======== START OF CLASS DATA ======== -->
<H2>
<FONT SIZE="-1">
javax.servlet.jsp.tagext</FONT>
<BR>
Class  TagData</H2>
<PRE>
java.lang.Object
  |
  +--<B>javax.servlet.jsp.tagext.TagData</B>
</PRE>
<DL>
<DT><B>All Implemented Interfaces:</B> <DD>java.lang.Cloneable</DD>
</DL>
<HR>
<DL>
<DT>public class <B>TagData</B><DT>extends java.lang.Object<DT>implements java.lang.Cloneable</DL>

<P>
The (translation-time only) attribute/value information for a tag instance.

 <p>
 TagData is only used as an argument to the isValid and getVariableInfo
 methods of TagExtraInfo, which are invoked at translation time.
<P>

<P>
<HR>

<P>
<!-- ======== NESTED CLASS SUMMARY ======== -->


<!-- =========== FIELD SUMMARY =========== -->

<A NAME="field_summary"><!-- --></A>
<TABLE BORDER="1" CELLPADDING="3" CELLSPACING="0" WIDTH="100%">
<TR BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
<TD COLSPAN=2><FONT SIZE="+2">
<B>Field Summary</B></FONT></TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>static&nbsp;java.lang.Object</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../../javax/servlet/jsp/tagext/TagData.html#REQUEST_TIME_VALUE">REQUEST_TIME_VALUE</A></B></CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Distinguished value for an attribute to indicate its value
 is a request-time expression (which is not yet available because
 TagData instances are used at translation-time).</TD>
</TR>
</TABLE>
&nbsp;
<!-- ======== CONSTRUCTOR SUMMARY ======== -->

<A NAME="constructor_summary"><!-- --></A>
<TABLE BORDER="1" CELLPADDING="3" CELLSPACING="0" WIDTH="100%">
<TR BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
<TD COLSPAN=2><FONT SIZE="+2">
<B>Constructor Summary</B></FONT></TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD><CODE><B><A HREF="../../../../javax/servlet/jsp/tagext/TagData.html#TagData(java.util.Hashtable)">TagData</A></B>(java.util.Hashtable&nbsp;attrs)</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Constructor for a TagData.

 </TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD><CODE><B><A HREF="../../../../javax/servlet/jsp/tagext/TagData.html#TagData(java.lang.Object[][])">TagData</A></B>(java.lang.Object[][]&nbsp;atts)</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Constructor for TagData.

 </TD>
</TR>
</TABLE>
&nbsp;
<!-- ========== METHOD SUMMARY =========== -->

<A NAME="method_summary"><!-- --></A>
<TABLE BORDER="1" CELLPADDING="3" CELLSPACING="0" WIDTH="100%">
<TR BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
<TD COLSPAN=2><FONT SIZE="+2">
<B>Method Summary</B></FONT></TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;java.lang.Object</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../../javax/servlet/jsp/tagext/TagData.html#getAttribute(java.lang.String)">getAttribute</A></B>(java.lang.String&nbsp;attName)</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;The value of the attribute.
 </TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;java.util.Enumeration</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../../javax/servlet/jsp/tagext/TagData.html#getAttributes()">getAttributes</A></B>()</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Enumerates the attributes.</TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;java.lang.String</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../../javax/servlet/jsp/tagext/TagData.html#getAttributeString(java.lang.String)">getAttributeString</A></B>(java.lang.String&nbsp;attName)</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Get the value for a given attribute.</TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;java.lang.String</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../../javax/servlet/jsp/tagext/TagData.html#getId()">getId</A></B>()</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;The value of the id attribute, if available.</TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;void</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../../javax/servlet/jsp/tagext/TagData.html#setAttribute(java.lang.String, java.lang.Object)">setAttribute</A></B>(java.lang.String&nbsp;attName,
             java.lang.Object&nbsp;value)</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Set the value of an attribute.</TD>
</TR>
</TABLE>
&nbsp;<A NAME="methods_inherited_from_class_java.lang.Object"><!-- --></A>
<TABLE BORDER="1" CELLPADDING="3" CELLSPACING="0" WIDTH="100%">
<TR BGCOLOR="#EEEEFF" CLASS="TableSubHeadingColor">
<TD><B>Methods inherited from class java.lang.Object</B></TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD><CODE>clone, equals, finalize, getClass, hashCode, notify, notifyAll, toString, wait, wait, wait</CODE></TD>
</TR>
</TABLE>
&nbsp;
<P>

<!-- ============ FIELD DETAIL =========== -->

<A NAME="field_detail"><!-- --></A>
<TABLE BORDER="1" CELLPADDING="3" CELLSPACING="0" WIDTH="100%">
<TR BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
<TD COLSPAN=1><FONT SIZE="+2">
<B>Field Detail</B></FONT></TD>
</TR>
</TABLE>

<A NAME="REQUEST_TIME_VALUE"><!-- --></A><H3>
REQUEST_TIME_VALUE</H3>
<PRE>
public static final java.lang.Object <B>REQUEST_TIME_VALUE</B></PRE>
<DL>
<DD>Distinguished value for an attribute to indicate its value
 is a request-time expression (which is not yet available because
 TagData instances are used at translation-time).
<P>
<DL>
</DL>
</DL>

<!-- ========= CONSTRUCTOR DETAIL ======== -->

<A NAME="constructor_detail"><!-- --></A>
<TABLE BORDER="1" CELLPADDING="3" CELLSPACING="0" WIDTH="100%">
<TR BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
<TD COLSPAN=1><FONT SIZE="+2">
<B>Constructor Detail</B></FONT></TD>
</TR>
</TABLE>

<A NAME="TagData(java.lang.Object[][])"><!-- --></A><H3>
TagData</H3>
<PRE>
public <B>TagData</B>(java.lang.Object[][]&nbsp;atts)</PRE>
<DL>
<DD>Constructor for TagData.

 <p>
 A typical constructor may be
 <pre>
 static final Object[][] att = {{"connection", "conn0"}, {"id", "query0"}};
 static final TagData td = new TagData(att);
 </pre>

 All values must be Strings except for those holding the
 distinguished object REQUEST_TIME_VALUE.
<P>
<DT><B>Parameters:</B><DD><CODE>atts</CODE> - the static attribute and values.  May be null.</DL>
<HR>

<A NAME="TagData(java.util.Hashtable)"><!-- --></A><H3>
TagData</H3>
<PRE>
public <B>TagData</B>(java.util.Hashtable&nbsp;attrs)</PRE>
<DL>
<DD>Constructor for a TagData.

 If you already have the attributes in a hashtable, use this
 constructor.
<P>
<DT><B>Parameters:</B><DD><CODE>attrs</CODE> - A hashtable to get the values from.</DL>

<!-- ============ METHOD DETAIL ========== -->

<A NAME="method_detail"><!-- --></A>
<TABLE BORDER="1" CELLPADDING="3" CELLSPACING="0" WIDTH="100%">
<TR BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
<TD COLSPAN=1><FONT SIZE="+2">
<B>Method Detail</B></FONT></TD>
</TR>
</TABLE>

<A NAME="getId()"><!-- --></A><H3>
getId</H3>
<PRE>
public java.lang.String <B>getId</B>()</PRE>
<DL>
<DD>The value of the id attribute, if available.
<P>
<DD><DL>
</DL>
</DD>
<DD><DL>

<DT><B>Returns:</B><DD>the value of the id attribute or null</DL>
</DD>
</DL>
<HR>

<A NAME="getAttribute(java.lang.String)"><!-- --></A><H3>
getAttribute</H3>
<PRE>
public java.lang.Object <B>getAttribute</B>(java.lang.String&nbsp;attName)</PRE>
<DL>
<DD>The value of the attribute.
 Returns the distinguished object REQUEST_TIME_VALUE if
 the value is request time. Returns null if the attribute is not set.
<P>
<DD><DL>
</DL>
</DD>
<DD><DL>

<DT><B>Returns:</B><DD>the attribute's value object</DL>
</DD>
</DL>
<HR>

<A NAME="setAttribute(java.lang.String, java.lang.Object)"><!-- --></A><H3>
setAttribute</H3>
<PRE>
public void <B>setAttribute</B>(java.lang.String&nbsp;attName,
                         java.lang.Object&nbsp;value)</PRE>
<DL>
<DD>Set the value of an attribute.
<P>
<DD><DL>
</DL>
</DD>
<DD><DL>
<DT><B>Parameters:</B><DD><CODE>attName</CODE> - the name of the attribute<DD><CODE>value</CODE> - the value.</DL>
</DD>
</DL>
<HR>

<A NAME="getAttributeString(java.lang.String)"><!-- --></A><H3>
getAttributeString</H3>
<PRE>
public java.lang.String <B>getAttributeString</B>(java.lang.String&nbsp;attName)</PRE>
<DL>
<DD>Get the value for a given attribute.
<P>
<DD><DL>
</DL>
</DD>
<DD><DL>

<DT><B>Returns:</B><DD>the attribute value string</DL>
</DD>
</DL>
<HR>

<A NAME="getAttributes()"><!-- --></A><H3>
getAttributes</H3>
<PRE>
public java.util.Enumeration <B>getAttributes</B>()</PRE>
<DL>
<DD>Enumerates the attributes.
<P>
<DD><DL>
</DL>
</DD>
<DD><DL>

<DT><B>Returns:</B><DD>An enumeration of the attributes in a TagData</DL>
</DD>
</DL>
<!-- ========= END OF CLASS DATA ========= -->
<HR>

<!-- ========== START OF NAVBAR ========== -->
<A NAME="navbar_bottom"><!-- --></A>
<TABLE BORDER="0" WIDTH="100%" CELLPADDING="1" CELLSPACING="0">
<TR>
<TD COLSPAN=3 BGCOLOR="#EEEEFF" CLASS="NavBarCell1">
<A NAME="navbar_bottom_firstrow"><!-- --></A>
<TABLE BORDER="0" CELLPADDING="0" CELLSPACING="3">
  <TR ALIGN="center" VALIGN="top">
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../../overview-summary.html"><FONT CLASS="NavBarFont1"><B>Overview</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="package-summary.html"><FONT CLASS="NavBarFont1"><B>Package</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#FFFFFF" CLASS="NavBarCell1Rev"> &nbsp;<FONT CLASS="NavBarFont1Rev"><B>Class</B></FONT>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="class-use/TagData.html"><FONT CLASS="NavBarFont1"><B>Use</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="package-tree.html"><FONT CLASS="NavBarFont1"><B>Tree</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../../deprecated-list.html"><FONT CLASS="NavBarFont1"><B>Deprecated</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../../index-all.html"><FONT CLASS="NavBarFont1"><B>Index</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../../help-doc.html"><FONT CLASS="NavBarFont1"><B>Help</B></FONT></A>&nbsp;</TD>
  </TR>
</TABLE>
</TD>
<TD ALIGN="right" VALIGN="top" ROWSPAN=3><EM>
</EM>
</TD>
</TR>

<TR>
<TD BGCOLOR="white" CLASS="NavBarCell2"><FONT SIZE="-2">
&nbsp;<A HREF="../../../../javax/servlet/jsp/tagext/TagAttributeInfo.html"><B>PREV CLASS</B></A>&nbsp;
&nbsp;<A HREF="../../../../javax/servlet/jsp/tagext/TagExtraInfo.html"><B>NEXT CLASS</B></A></FONT></TD>
<TD BGCOLOR="white" CLASS="NavBarCell2"><FONT SIZE="-2">
  <A HREF="../../../../index.html" TARGET="_top"><B>FRAMES</B></A>  &nbsp;
&nbsp;<A HREF="TagData.html" TARGET="_top"><B>NO FRAMES</B></A>  &nbsp;
&nbsp;
<SCRIPT>
  <!--
  if(window==top) {
    document.writeln('<A HREF="../../../../allclasses-noframe.html" TARGET=""><B>All Classes</B></A>');
  }
  //-->
</SCRIPT>
<NOSCRIPT>
<A HREF="../../../../allclasses-noframe.html" TARGET=""><B>All Classes</B></A>
</NOSCRIPT>
</FONT></TD>
</TR>
<TR>
<TD VALIGN="top" CLASS="NavBarCell3"><FONT SIZE="-2">
  SUMMARY:&nbsp;NESTED&nbsp;|&nbsp;<A HREF="#field_summary">FIELD</A>&nbsp;|&nbsp;<A HREF="#constructor_summary">CONSTR</A>&nbsp;|&nbsp;<A HREF="#method_summary">METHOD</A></FONT></TD>
<TD VALIGN="top" CLASS="NavBarCell3"><FONT SIZE="-2">
DETAIL:&nbsp;<A HREF="#field_detail">FIELD</A>&nbsp;|&nbsp;<A HREF="#constructor_detail">CONSTR</A>&nbsp;|&nbsp;<A HREF="#method_detail">METHOD</A></FONT></TD>
</TR>
</TABLE>
<!-- =========== END OF NAVBAR =========== -->

<HR>
Copyright &copy; 1999-2002 The Apache Software Foundation.  All Rights Reserved.
</BODY>
</HTML>
