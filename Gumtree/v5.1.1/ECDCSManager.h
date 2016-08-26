/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ECGAppDelegate;

@interface ECDCSManager : NSObject {

	ECGAppDelegate* _delegate;

}

@property (assign,nonatomic,__weak) ECGAppDelegate * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dcsLoadFinished:(id)arg1 ;
-(void)dcsKillApp:(id)arg1 ;
-(void)dcsConfigurationChanged:(id)arg1 ;
-(void)dcsConfigurationLoadFailed:(id)arg1 ;
-(void)dcsHandleAlertForType:(unsigned long long)arg1 killApp:(BOOL)arg2 ;
-(void)dcsCheckConfiguration:(id)arg1 ;
-(void)displayAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 okAction:(SEL)arg5 killApp:(BOOL)arg6 ;
-(BOOL)suppressMessage;
-(void)dcsOpenAppStore;
-(void)dcsOpenURL;
-(id)initWithAppDelegate:(id)arg1 ;
-(void)setDelegate:(ECGAppDelegate *)arg1 ;
-(ECGAppDelegate *)delegate;
-(void)appWillEnterForeground;
@end
