/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComposerPublicationProgressDisplayListener <NSObject>
@required
-(void)cancelButtonTappedForPublisherData:(id)arg1 withReason:(id)arg2;
-(void)dismissButtonTappedForPublisherData:(id)arg1;
-(void)retryButtonTappedForPublisherData:(id)arg1;
-(void)uploadViewUpdatedForCancellationOfPublicationForPublisherData:(id)arg1;
-(void)uploadViewUpdatedForTerminalFailureOfPublicationForPublisherData:(id)arg1;
-(void)uploadViewUpdatedForTransientFailureOfPublicationForPublisherData:(id)arg1;
-(void)uploadViewUpdatedForSuccessOfPublicationForPublisherData:(id)arg1 response:(id)arg2;

@end
