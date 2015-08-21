/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@class FBUserSession, MNPhotoImageRequester, MNPhotoImageUploadResultCacher, NSString, FBMessageOutgoingAttribution;

@interface MNExternalDataToForwardContentMapper : NSObject <FBClassProvidable> {

	FBUserSession* _session;
	MNPhotoImageRequester* _imageRequester;
	MNPhotoImageUploadResultCacher* _uploadResultCacher;
	NSString* _text;
	FBMessageOutgoingAttribution* _outgoingAttribution;
	double _minimumBitrateForTranscoding;

}

@property (assign,nonatomic) double minimumBitrateForTranscoding;              //@synthesize minimumBitrateForTranscoding=_minimumBitrateForTranscoding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)contentForExternalData:(id)arg1 forwardFlowContentType:(long long)arg2 outgoingAttribution:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)initWithSession:(id)arg1 imageRequester:(id)arg2 uploadResultCacher:(id)arg3 ;
-(id)_attachmentsFromExternalURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_attachmentsFromFacebookURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_attachmentsFromImageCollection:(id)arg1 externalURL:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_attachmentsFromMediaAsset:(id)arg1 forwardFlowContentType:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(double)minimumBitrateForTranscoding;
-(void)setMinimumBitrateForTranscoding:(double)arg1 ;
@end

