/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPTMXAsyncMediaDocument.h>

@class SKPTMXAsyncMediaProfile;

@interface SKPAsyncVideoMediaDocument : SKPTMXAsyncMediaDocument {

	BOOL _thumbnailFetchingPriorityHigh;
	SKPTMXAsyncMediaProfile* _profileVideo;
	SKPTMXAsyncMediaProfile* _profileThumbnail;

}

@property (nonatomic,retain) SKPTMXAsyncMediaProfile * profileVideo;                  //@synthesize profileVideo=_profileVideo - In the implementation block
@property (nonatomic,retain) SKPTMXAsyncMediaProfile * profileThumbnail;              //@synthesize profileThumbnail=_profileThumbnail - In the implementation block
@property (assign,nonatomic) BOOL thumbnailFetchingPriorityHigh;                      //@synthesize thumbnailFetchingPriorityHigh=_thumbnailFetchingPriorityHigh - In the implementation block
+(id)lazyLoadedPropertiesKeypaths;
-(void)startDownloadFromCache;
-(id)interestedProfiles;
-(void)setProfileVideo:(SKPTMXAsyncMediaProfile *)arg1 ;
-(void)setProfileThumbnail:(SKPTMXAsyncMediaProfile *)arg1 ;
-(SKPTMXAsyncMediaProfile *)profileVideo;
-(SKPTMXAsyncMediaProfile *)profileThumbnail;
-(id)fetchVideoThumbnailOperation;
-(id)fetchOperationForLazyProperty:(id)arg1 fetchQueueIdentifier:(id*)arg2 ;
-(BOOL)thumbnailFetchingPriorityHigh;
-(void)initializeALEObjectWithObjectId:(unsigned long long)arg1 ;
-(BOOL)upload;
-(void)startDownloadWithUserAction:(BOOL)arg1 ;
-(void)setThumbnailFetchingPriorityHigh:(BOOL)arg1 ;
-(void)cancelDownload;
@end
