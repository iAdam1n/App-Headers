/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface FBTweakStore : NSObject <NSCoding> {

	NSMutableArray* _orderedCategories;
	NSMutableDictionary* _namedCategories;

}

@property (nonatomic,copy,readonly) NSArray * tweakCategories; 
+(id)sharedInstance;
-(void)addTweakCategory:(id)arg1 ;
-(void)removeTweakCategory:(id)arg1 ;
-(id)tweakCategoryWithName:(id)arg1 ;
-(NSArray *)tweakCategories;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)reset;
@end
