/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSString, NSSet, NSObject, MNServiceCreator;

@interface MNServiceConfiguration : FBValueObject <NSCopying> {

	NSString* _uniqueIdentifier;
	NSSet* _dependencyIdentifiers;
	unsigned long long _startupLevel;
	NSObject*<OS_dispatch_queue> _queue;
	MNServiceCreator* _serviceCreator;

}

@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * dependencyIdentifiers;                  //@synthesize dependencyIdentifiers=_dependencyIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long startupLevel;                     //@synthesize startupLevel=_startupLevel - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) MNServiceCreator * serviceCreator;              //@synthesize serviceCreator=_serviceCreator - In the implementation block
-(id)initWithUniqueIdentifier:(id)arg1 dependencyIdentifiers:(id)arg2 startupLevel:(unsigned long long)arg3 queue:(id)arg4 serviceCreator:(id)arg5 ;
-(NSSet *)dependencyIdentifiers;
-(MNServiceCreator *)serviceCreator;
-(unsigned long long)startupLevel;
-(NSString *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)queue;
@end
