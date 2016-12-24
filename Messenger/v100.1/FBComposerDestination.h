/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBComposerAuthor, FBComposerPublishTarget, NSString, FBComposerPrivacy;

@interface FBComposerDestination : FBValueObject <NSCopying, NSCoding> {

	BOOL _isUserPublishingToOwnTimeline;
	BOOL _isUserPublishingToActingTimeline;
	FBComposerAuthor* _author;
	FBComposerPublishTarget* _publishTarget;
	FBComposerPublishTarget* _containerPublishTargetForMediaCollection;
	NSString* _originalPublishTargetGraphQLID;
	FBComposerPrivacy* _privacy;

}

@property (nonatomic,copy,readonly) FBComposerAuthor * author;                                                       //@synthesize author=_author - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPublishTarget * publishTarget;                                         //@synthesize publishTarget=_publishTarget - In the implementation block
@property (nonatomic,readonly) BOOL isUserPublishingToOwnTimeline;                                                   //@synthesize isUserPublishingToOwnTimeline=_isUserPublishingToOwnTimeline - In the implementation block
@property (nonatomic,readonly) BOOL isUserPublishingToActingTimeline;                                                //@synthesize isUserPublishingToActingTimeline=_isUserPublishingToActingTimeline - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPublishTarget * containerPublishTargetForMediaCollection;              //@synthesize containerPublishTargetForMediaCollection=_containerPublishTargetForMediaCollection - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalPublishTargetGraphQLID;                                       //@synthesize originalPublishTargetGraphQLID=_originalPublishTargetGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPrivacy * privacy;                                                     //@synthesize privacy=_privacy - In the implementation block
-(FBComposerPublishTarget *)publishTarget;
-(id)initWithAuthor:(id)arg1 publishTarget:(id)arg2 isUserPublishingToOwnTimeline:(BOOL)arg3 isUserPublishingToActingTimeline:(BOOL)arg4 containerPublishTargetForMediaCollection:(id)arg5 originalPublishTargetGraphQLID:(id)arg6 privacy:(id)arg7 ;
-(BOOL)isUserPublishingToOwnTimeline;
-(BOOL)isUserPublishingToActingTimeline;
-(FBComposerPublishTarget *)containerPublishTargetForMediaCollection;
-(NSString *)originalPublishTargetGraphQLID;
-(FBComposerPrivacy *)privacy;
-(FBComposerAuthor *)author;
@end
