/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, FBComposerPublication, FBPublicationError, NSDate, NSDictionary;

@interface FBComposerPublicationStatusEventRecord : NSObject {

	int _mediaItemType;
	unsigned long long _eventType;
	UIImage* _mediaItemThumbnail;
	FBComposerPublication* _composerPublication;
	FBPublicationError* _publicationError;
	double _publishingProgress;
	NSDate* _scheduledPublishingDate;
	NSDictionary* _uploadQualityByMediaID;

}

@property (nonatomic,readonly) unsigned long long eventType;                             //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) UIImage * mediaItemThumbnail;                             //@synthesize mediaItemThumbnail=_mediaItemThumbnail - In the implementation block
@property (nonatomic,readonly) int mediaItemType;                                        //@synthesize mediaItemType=_mediaItemType - In the implementation block
@property (nonatomic,readonly) FBComposerPublication * composerPublication;              //@synthesize composerPublication=_composerPublication - In the implementation block
@property (nonatomic,readonly) FBPublicationError * publicationError;                    //@synthesize publicationError=_publicationError - In the implementation block
@property (nonatomic,readonly) double publishingProgress;                                //@synthesize publishingProgress=_publishingProgress - In the implementation block
@property (nonatomic,copy,readonly) NSDate * scheduledPublishingDate;                    //@synthesize scheduledPublishingDate=_scheduledPublishingDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * uploadQualityByMediaID;               //@synthesize uploadQualityByMediaID=_uploadQualityByMediaID - In the implementation block
-(id)initWithEventType:(unsigned long long)arg1 composerPublication:(id)arg2 publicationError:(id)arg3 scheduledPublishingDate:(id)arg4 publishingProgress:(double)arg5 mediaItemType:(int)arg6 mediaItemThumbnail:(id)arg7 uploadQualityByMediaID:(id)arg8 ;
-(UIImage *)mediaItemThumbnail;
-(FBComposerPublication *)composerPublication;
-(FBPublicationError *)publicationError;
-(double)publishingProgress;
-(NSDate *)scheduledPublishingDate;
-(NSDictionary *)uploadQualityByMediaID;
-(id)description;
-(unsigned long long)eventType;
-(int)mediaItemType;
@end
