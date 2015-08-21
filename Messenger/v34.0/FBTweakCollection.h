/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:13 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/NSCoding.h>

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

