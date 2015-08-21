/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/NSCopying.h>
#import <Gumtree/NSFastEnumeration.h>

@interface EMFXMLNode : NSObject <NSCopying, NSFastEnumeration> {

	xmlDoc* _xmlTree;
	xmlNode* _xmlNode;
	unsigned long long _mutationCount;
	BOOL _outsideOwnership;

}
+(id)nodeWithName:(id)arg1 ;
+(id)nodeWithName:(id)arg1 prefix:(id)arg2 href:(id)arg3 ;
+(id)nodeWithData:(id)arg1 ;
+(id)nodeWithString:(id)arg1 ;
+(id)nodeWithName:(id)arg1 value:(id)arg2 ;
+(id)nodeWithName:(id)arg1 attributes:(id)arg2 ;
+(id)nodeWithName:(id)arg1 value:(id)arg2 attributes:(id)arg3 ;
+(void)load;
-(id)initWithXMLNode:(xmlNode*)arg1 ;
-(id)initWithName:(id)arg1 prefix:(id)arg2 href:(id)arg3 ;
-(id)attributeValue:(id)arg1 ;
-(void)addAttribute:(id)arg1 withValue:(id)arg2 ;
-(id)initWithHTMLData:(id)arg1 ;
-(id)initWithHTMLString:(id)arg1 ;
-(id)childNamed:(id)arg1 ;
-(id)data:(BOOL)arg1 ;
-(id)prettyData;
-(void)setCData:(id)arg1 ;
-(id)childrenNamed:(id)arg1 ;
-(id)objectWithXPath:(id)arg1 ;
-(id)objectsWithXPath:(id)arg1 ;
-(id)childText:(id)arg1 ;
-(BOOL)childBool:(id)arg1 ;
-(long long)childInt:(id)arg1 ;
-(float)childFloat:(id)arg1 ;
-(double)childDouble:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PL17*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(long long)count;
-(id)init;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)addChildren:(id)arg1 ;
-(id)addChild:(id)arg1 ;
-(id)childAtIndex:(long long)arg1 ;
-(long long)attributeCount;
-(id)parent;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(void)removeAttribute:(id)arg1 ;
-(id)children;
@end

