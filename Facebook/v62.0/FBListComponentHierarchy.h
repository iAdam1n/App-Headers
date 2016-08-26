/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBListComponentHierarchy : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _node_type;
	id _node_state;
	NSArray* _node_children;
	id _leaf_model;
	id _leaf_context;
	NSString* _leaf_listComponentGeneratorType;

}
+(id)nodeWithType:(id)arg1 state:(id)arg2 children:(id)arg3 ;
+(id)leafWithModel:(id)arg1 context:(id)arg2 listComponentGeneratorType:(id)arg3 ;
-(void)matchNode:(/*^block*/id)arg1 leaf:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
