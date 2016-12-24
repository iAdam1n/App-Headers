/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:36 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSArray;

@interface FBTweakCollection : NSObject <NSCoding> {

	NSMutableArray* _orderedTweaks;
	NSMutableDictionary* _identifierTweaks;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tweaks; 
-(id)tweakWithIdentifier:(id)arg1 ;
-(NSArray *)tweaks;
-(void)addTweak:(id)arg1 ;
-(void)removeTweak:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
@end
