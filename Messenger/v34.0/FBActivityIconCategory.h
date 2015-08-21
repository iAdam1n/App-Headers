/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSString;

@interface FBActivityIconCategory : FBValueObject <NSCopying, NSCoding> {

	NSString* _graphQLID;
	NSString* _name;
	unsigned long long _numberOfIcons;

}

@property (nonatomic,copy,readonly) NSString * graphQLID;                     //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfIcons;              //@synthesize numberOfIcons=_numberOfIcons - In the implementation block
-(NSString *)graphQLID;
-(id)initWithGraphQLID:(id)arg1 name:(id)arg2 numberOfIcons:(unsigned long long)arg3 ;
-(unsigned long long)numberOfIcons;
-(NSString *)name;
@end

