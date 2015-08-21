/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString, NSURL, MNPhotoViewModel, NSDate;

@interface MNVideoViewModel : FBValueObject <NSCopying> {

	NSString* _videoId;
	NSURL* _src;
	MNPhotoViewModel* _thumbnailPhotoViewModel;
	double _width;
	double _height;
	NSString* _creatorId;
	NSDate* _createdTime;

}

@property (nonatomic,copy,readonly) NSString * videoId;                                      //@synthesize videoId=_videoId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * src;                                             //@synthesize src=_src - In the implementation block
@property (nonatomic,copy,readonly) MNPhotoViewModel * thumbnailPhotoViewModel;              //@synthesize thumbnailPhotoViewModel=_thumbnailPhotoViewModel - In the implementation block
@property (nonatomic,readonly) double width;                                                 //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                                                //@synthesize height=_height - In the implementation block
@property (nonatomic,copy,readonly) NSString * creatorId;                                    //@synthesize creatorId=_creatorId - In the implementation block
@property (nonatomic,copy,readonly) NSDate * createdTime;                                    //@synthesize createdTime=_createdTime - In the implementation block
-(NSDate *)createdTime;
-(NSString *)creatorId;
-(MNPhotoViewModel *)thumbnailPhotoViewModel;
-(id)initWithVideoId:(id)arg1 src:(id)arg2 thumbnailPhotoViewModel:(id)arg3 width:(double)arg4 height:(double)arg5 creatorId:(id)arg6 createdTime:(id)arg7 ;
-(NSString *)videoId;
-(double)width;
-(double)height;
-(NSURL *)src;
@end

