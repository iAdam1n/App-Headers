/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString;

@interface FBComposerPostEditingSummary : FBValueObject <NSCopying> {

	BOOL _canViewerEditPostPhotos;
	NSString* _storyGraphQLID;
	NSString* _identifierToUseWhenPublishingChangedContent;
	NSString* _storyCacheID;
	long long _numberOfPreviousEdits;
	long long _numberOfMediaAttachments;

}

@property (nonatomic,copy,readonly) NSString * storyGraphQLID;                                           //@synthesize storyGraphQLID=_storyGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifierToUseWhenPublishingChangedContent;              //@synthesize identifierToUseWhenPublishingChangedContent=_identifierToUseWhenPublishingChangedContent - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyCacheID;                                             //@synthesize storyCacheID=_storyCacheID - In the implementation block
@property (nonatomic,readonly) long long numberOfPreviousEdits;                                          //@synthesize numberOfPreviousEdits=_numberOfPreviousEdits - In the implementation block
@property (nonatomic,readonly) long long numberOfMediaAttachments;                                       //@synthesize numberOfMediaAttachments=_numberOfMediaAttachments - In the implementation block
@property (nonatomic,readonly) BOOL canViewerEditPostPhotos;                                             //@synthesize canViewerEditPostPhotos=_canViewerEditPostPhotos - In the implementation block
-(id)initWithStoryGraphQLID:(id)arg1 identifierToUseWhenPublishingChangedContent:(id)arg2 storyCacheID:(id)arg3 numberOfPreviousEdits:(long long)arg4 numberOfMediaAttachments:(long long)arg5 canViewerEditPostPhotos:(BOOL)arg6 ;
-(NSString *)storyGraphQLID;
-(NSString *)identifierToUseWhenPublishingChangedContent;
-(NSString *)storyCacheID;
-(long long)numberOfPreviousEdits;
-(long long)numberOfMediaAttachments;
-(BOOL)canViewerEditPostPhotos;
@end
