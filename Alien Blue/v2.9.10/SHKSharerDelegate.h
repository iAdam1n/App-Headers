/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/SHKSharerDelegate.h>

@class NSString;

@interface SHKSharerDelegate : NSObject <SHKSharerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sharerStartedSending:(id)arg1 ;
-(void)sharerFinishedSending:(id)arg1 ;
-(void)sharer:(id)arg1 failedWithError:(id)arg2 shouldRelogin:(BOOL)arg3 ;
-(void)sharerCancelledSending:(id)arg1 ;
-(void)sharerShowBadCredentialsAlert:(id)arg1 ;
-(void)sharerShowOtherAuthorizationErrorAlert:(id)arg1 ;
-(void)sharerAuthDidFinish:(id)arg1 success:(BOOL)arg2 ;
@end

