/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSArray;

@interface FBTweakCategory : NSObject <NSCoding> {

	NSMutableArray* _orderedCollections;
	NSMutableDictionary* _namedCollections;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tweakCollections; 
-(id)tweakCollectionWithName:(id)arg1 ;
-(NSArray *)tweakCollections;
-(void)addTweakCollection:(id)arg1 ;
-(void)removeTweakCollection:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
@end
