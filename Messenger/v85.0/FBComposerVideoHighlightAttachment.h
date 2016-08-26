/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBComposerVideoHighlightAttachment : FBValueObject <NSCopying> {

	NSString* _videoID;
	NSURL* _videoURL;
	NSURL* _videoThumbnailURL;

}

@property (nonatomic,copy,readonly) NSString * videoID;                     //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * videoURL;                       //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * videoThumbnailURL;              //@synthesize videoThumbnailURL=_videoThumbnailURL - In the implementation block
-(NSString *)videoID;
-(id)initWithVideoID:(id)arg1 videoURL:(id)arg2 videoThumbnailURL:(id)arg3 ;
-(NSURL *)videoThumbnailURL;
-(NSURL *)videoURL;
@end
