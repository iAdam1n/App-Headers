/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class SMXMLDocument, NSString, NSMutableString, NSMutableArray, NSDictionary, NSArray;

@interface SMXMLElement : NSObject <NSXMLParserDelegate> {

	SMXMLDocument* document;
	SMXMLElement* parent;
	NSString* name;
	NSMutableString* value;
	NSMutableArray* children;
	NSDictionary* attributes;

}

@property (assign,nonatomic) SMXMLDocument * document; 
@property (assign,nonatomic) SMXMLElement * parent; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSString * value; 
@property (nonatomic,retain) NSArray * children; 
@property (nonatomic,readonly) SMXMLElement * firstChild; 
@property (nonatomic,readonly) SMXMLElement * lastChild; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)childNamed:(id)arg1 ;
-(id)descendantWithPath:(id)arg1 ;
-(id)childrenNamed:(id)arg1 ;
-(id)childWithAttribute:(id)arg1 value:(id)arg2 ;
-(id)valueWithPath:(id)arg1 ;
-(id)attributeNamed:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(SMXMLElement *)lastChild;
-(SMXMLElement *)firstChild;
-(SMXMLDocument *)document;
-(id)initWithDocument:(id)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setDocument:(SMXMLDocument *)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)setChildren:(NSArray *)arg1 ;
-(SMXMLElement *)parent;
-(NSArray *)children;
-(void)setParent:(SMXMLElement *)arg1 ;
-(id)descriptionWithIndent:(id)arg1 ;
@end

