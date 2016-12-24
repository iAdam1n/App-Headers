/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface MNComposerBadgeStoreDataModel : FBValueObject <NSCopying> {

	NSDictionary* _globalBadgeModels;
	NSDictionary* _threadIDToBadgeModels;

}

@property (nonatomic,copy,readonly) NSDictionary * globalBadgeModels;                  //@synthesize globalBadgeModels=_globalBadgeModels - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * threadIDToBadgeModels;              //@synthesize threadIDToBadgeModels=_threadIDToBadgeModels - In the implementation block
-(id)initWithGlobalBadgeModels:(id)arg1 threadIDToBadgeModels:(id)arg2 ;
-(NSDictionary *)globalBadgeModels;
-(NSDictionary *)threadIDToBadgeModels;
@end
