/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, FBMThreadKey, MNThreadReadMark;

@interface MNThreadSummaryClientUpdateCreationState : FBValueObject <NSCopying> {

	NSSet* _allowedUpdateTypes;
	FBMThreadKey* _threadKey;
	MNThreadReadMark* _implictReadMark;
	MNThreadReadMark* _explictReadMark;

}

@property (nonatomic,copy,readonly) NSSet * allowedUpdateTypes;                      //@synthesize allowedUpdateTypes=_allowedUpdateTypes - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                        //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) MNThreadReadMark * implictReadMark;              //@synthesize implictReadMark=_implictReadMark - In the implementation block
@property (nonatomic,copy,readonly) MNThreadReadMark * explictReadMark;              //@synthesize explictReadMark=_explictReadMark - In the implementation block
-(id)initWithAllowedUpdateTypes:(id)arg1 threadKey:(id)arg2 implictReadMark:(id)arg3 explictReadMark:(id)arg4 ;
-(NSSet *)allowedUpdateTypes;
-(MNThreadReadMark *)implictReadMark;
-(MNThreadReadMark *)explictReadMark;
-(FBMThreadKey *)threadKey;
@end
