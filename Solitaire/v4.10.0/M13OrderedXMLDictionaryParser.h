/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class M13MutableOrderedDictionary, NSMutableArray, NSMutableString, NSString;

@interface M13OrderedXMLDictionaryParser : NSObject <NSXMLParserDelegate> {

	M13MutableOrderedDictionary* root;
	NSMutableArray* stack;
	NSMutableString* text;

}

@property (nonatomic,retain) M13MutableOrderedDictionary * root; 
@property (nonatomic,retain) NSMutableArray * stack; 
@property (nonatomic,readonly) M13MutableOrderedDictionary * top; 
@property (nonatomic,retain) NSMutableString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)convertEmptyNSDictionaryNodesToNSString:(id)arg1 ;
+(id)orderedDictionaryWithXMLData:(id)arg1 ;
+(id)xmlStringForNode:(id)arg1 withNodeName:(id)arg2 ;
+(id)orderedDictionaryWithXMLFile:(id)arg1 ;
-(id)initWithXMLData:(id)arg1 ;
-(void)endText;
-(id)nameForNode:(id)arg1 inDictionary:(id)arg2 ;
-(void)setStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stack;
-(NSMutableString *)text;
-(void)setText:(NSMutableString *)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 foundComment:(id)arg2 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)setRoot:(M13MutableOrderedDictionary *)arg1 ;
-(void)addText:(id)arg1 ;
-(M13MutableOrderedDictionary *)root;
-(M13MutableOrderedDictionary *)top;
@end
