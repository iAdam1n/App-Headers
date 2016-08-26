/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, XmlNode, NSError;

@interface XmlParser : NSObject <NSXMLParserDelegate> {

	BOOL bGotError;
	NSXMLParser* xmlParser;
	XmlNode* xmlRootNode;
	XmlNode* parentNode;
	NSError* error;

}

@property (assign) BOOL bGotError; 
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,retain) XmlNode * xmlRootNode; 
@property (nonatomic,retain) NSXMLParser * xmlParser; 
@property (nonatomic,retain) XmlNode * parentNode; 
-(BOOL)bGotError;
-(XmlNode *)xmlRootNode;
-(NSXMLParser *)xmlParser;
-(void)setXmlParser:(NSXMLParser *)arg1 ;
-(void)setBGotError:(BOOL)arg1 ;
-(void)setXmlRootNode:(XmlNode *)arg1 ;
-(XmlNode *)parentNode;
-(id)decodeError:(id)arg1 ;
-(void)parser:(id)arg1 foundProcessingInstructionWithTarget:(id)arg2 data:(id)arg3 ;
-(void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2 ;
-(void)parser:(id)arg1 foundElementDeclarationWithName:(id)arg2 model:(id)arg3 ;
-(void)parser:(id)arg1 foundAttributeDeclarationWithName:(id)arg2 forElement:(id)arg3 type:(id)arg4 defaultValue:(id)arg5 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 foundExternalEntityDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4 ;
-(void)parser:(id)arg1 foundInternalEntityDeclarationWithName:(id)arg2 value:(id)arg3 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(void)parser:(id)arg1 foundComment:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundNotationDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4 ;
-(void)parser:(id)arg1 validationErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(id)parser:(id)arg1 resolveExternalEntityName:(id)arg2 systemID:(id)arg3 ;
-(void)parser:(id)arg1 didEndMappingPrefix:(id)arg2 ;
-(void)parser:(id)arg1 foundUnparsedEntityDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4 notationName:(id)arg5 ;
-(void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3 ;
-(id)initWithParameters:(id)arg1 ;
-(void)parse;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setParentNode:(XmlNode *)arg1 ;
@end
