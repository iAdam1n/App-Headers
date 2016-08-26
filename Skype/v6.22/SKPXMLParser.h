/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, SKPXMLParserNode, NSString;

@interface SKPXMLParser : NSObject <NSXMLParserDelegate> {

	NSXMLParser* _parser;
	SKPXMLParserNode* _rootNode;
	SKPXMLParserNode* _currentNode;

}

@property (nonatomic,retain) NSXMLParser * parser;                        //@synthesize parser=_parser - In the implementation block
@property (nonatomic,retain) SKPXMLParserNode * rootNode;                 //@synthesize rootNode=_rootNode - In the implementation block
@property (nonatomic,retain) SKPXMLParserNode * currentNode;              //@synthesize currentNode=_currentNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rootNodeWithData:(id)arg1 error:(id*)arg2 ;
-(void)setCurrentNode:(SKPXMLParserNode *)arg1 ;
-(SKPXMLParserNode *)currentNode;
-(id)initWithData:(id)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)setRootNode:(SKPXMLParserNode *)arg1 ;
-(NSXMLParser *)parser;
-(void)setParser:(NSXMLParser *)arg1 ;
-(SKPXMLParserNode *)rootNode;
@end
