/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNThreadClientUpdateOptimisticMappingInfo, MNThreadClientUpdate;

@interface MNThreadUpdateApplicationInfo : FBValueObject <NSCopying, NSCoding> {

	BOOL _shouldSaveToDisk;
	BOOL _shouldHideFromUI;
	MNThreadClientUpdateOptimisticMappingInfo* _mappingInfo;
	MNThreadClientUpdate* _sourceUpdate;

}

@property (nonatomic,copy,readonly) MNThreadClientUpdateOptimisticMappingInfo * mappingInfo;              //@synthesize mappingInfo=_mappingInfo - In the implementation block
@property (nonatomic,copy,readonly) MNThreadClientUpdate * sourceUpdate;                                  //@synthesize sourceUpdate=_sourceUpdate - In the implementation block
@property (nonatomic,readonly) BOOL shouldSaveToDisk;                                                     //@synthesize shouldSaveToDisk=_shouldSaveToDisk - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideFromUI;                                                     //@synthesize shouldHideFromUI=_shouldHideFromUI - In the implementation block
-(MNThreadClientUpdate *)sourceUpdate;
-(id)initWithMappingInfo:(id)arg1 sourceUpdate:(id)arg2 shouldSaveToDisk:(BOOL)arg3 shouldHideFromUI:(BOOL)arg4 ;
-(BOOL)shouldHideFromUI;
-(BOOL)shouldSaveToDisk;
-(MNThreadClientUpdateOptimisticMappingInfo *)mappingInfo;
@end
