/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/MTDatacenterAuthMessageServiceDelegate.h>

@protocol MTDatacenterAuthActionDelegate;
@class MTContext, MTProto, NSString;

@interface MTDatacenterAuthAction : NSObject <MTDatacenterAuthMessageServiceDelegate> {

	long long _datacenterId;
	MTContext* _context;
	BOOL _awaitingAddresSetUpdate;
	MTProto* _authMtProto;
	id<MTDatacenterAuthActionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTDatacenterAuthActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)authMessageServiceCompletedWithAuthInfo:(id)arg1 ;
-(void)execute:(id)arg1 datacenterId:(long long)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<MTDatacenterAuthActionDelegate>)arg1 ;
-(void)dealloc;
-(id<MTDatacenterAuthActionDelegate>)delegate;
-(void)cleanup;
-(void)complete;
-(void)fail;
@end
