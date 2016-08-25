/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSISClientDelegate;
@interface AMSISClient : NSObject {

	id<AMSISClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AMSISClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateDeviceInfo;
-(void)setOO:(BOOL)arg1 ;
-(void)bootstrapDevice;
-(void)generateDid;
-(void)reportError:(int)arg1 withSelector:(SEL)arg2 ;
-(void)generateDidDidFailWithConnection:(id)arg1 withError:(id)arg2 ;
-(void)generateDidWithAppInstallationAttributedToAdNetwork:(id)arg1 ;
-(id)appendDesiredParameters:(id)arg1 forUrl:(id)arg2 ;
-(void)pingDidFailWithConnection:(id)arg1 withError:(id)arg2 ;
-(void)updateDeviceInfoDidFailWithConnection:(id)arg1 withError:(id)arg2 ;
-(id)appendCustomParameters:(id)arg1 toUrl:(id)arg2 ;
-(void)setOODidFailWithConnection:(id)arg1 withError:(id)arg2 ;
-(void)registerEventsDidFailWithConnection:(id)arg1 withError:(id)arg2 ;
-(int)interpretError:(id)arg1 ;
-(void)reportSuccessWithSelector:(SEL)arg1 ;
-(void)registerEvents:(id)arg1 ;
-(void)generateDidDidFinishWithConnection:(id)arg1 ;
-(void)pingDidFinishWithConnection:(id)arg1 ;
-(void)updateDeviceInfoDidFinishWithConnection:(id)arg1 ;
-(void)setOODidFinishWithConnection:(id)arg1 ;
-(void)registerEventsDidFinishWithConnection:(id)arg1 ;
-(void)setDelegate:(id<AMSISClientDelegate>)arg1 ;
-(void)dealloc;
-(id<AMSISClientDelegate>)delegate;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)ping;
@end

