/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/XMPPRequest.h>

@interface XMPPRequestContactsSync : XMPPRequest

@property (nonatomic,copy) id completion; 
+(id)contactsSyncModeTypeToString:(unsigned long long)arg1 ;
+(id)contactsSyncContextTypeToString:(unsigned long long)arg1 ;
-(void)didSuceedWithResponse:(id)arg1 ;
-(id)initWithContactsSyncContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didFailWithError:(id)arg1 ;
@end

