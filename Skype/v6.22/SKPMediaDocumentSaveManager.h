/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SKPMediaDocumentSaveManager : NSObject {

	NSMutableDictionary* _operationsInProcess;

}

@property (nonatomic,retain) NSMutableDictionary * operationsInProcess;              //@synthesize operationsInProcess=_operationsInProcess - In the implementation block
-(NSMutableDictionary *)operationsInProcess;
-(void)showSavingErrorWithRetryBlock:(/*^block*/id)arg1 cancelBlock:(/*^block*/id)arg2 ;
-(void)handleWebImageOperationCompletionForURL:(id)arg1 image:(id)arg2 error:(id)arg3 shouldDisplayErrorsOnScreen:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)startFetchingImageByURL:(id)arg1 sdWebImageCompletedBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setupTimeOutWatchDogForURL:(id)arg1 ;
-(void)setOperationsInProcess:(NSMutableDictionary *)arg1 ;
-(void)savePhotoWithURL:(id)arg1 shouldDisplayErrorsOnScreen:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)init;
@end

