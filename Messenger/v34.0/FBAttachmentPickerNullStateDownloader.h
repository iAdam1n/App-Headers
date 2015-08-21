/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBAttachmentPickerNullStateDownloaderDelegate;
@class FBUserSession, FBAttachmentPickerInputData, NSArray;

@interface FBAttachmentPickerNullStateDownloader : NSObject {

	FBUserSession* _session;
	unsigned long long _embedsType;
	FBAttachmentPickerInputData* _inputData;
	NSArray* _edges;
	unsigned long long _suggestionCount;
	BOOL _loading;
	id<FBAttachmentPickerNullStateDownloaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAttachmentPickerNullStateDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL loading;                                                                 //@synthesize loading=_loading - In the implementation block
-(id)_graphQLQuery;
-(id)initWithSession:(id)arg1 embedsType:(unsigned long long)arg2 inputData:(id)arg3 ;
-(void)setDelegate:(id<FBAttachmentPickerNullStateDownloaderDelegate>)arg1 ;
-(id<FBAttachmentPickerNullStateDownloaderDelegate>)delegate;
-(void)load;
-(BOOL)loading;
@end

