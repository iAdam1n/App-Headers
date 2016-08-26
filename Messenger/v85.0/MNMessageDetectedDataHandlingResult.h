/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface MNMessageDetectedDataHandlingResult : FBValueObject <NSCopying> {

	BOOL _isCanceled;
	NSError* _error;

}

@property (nonatomic,readonly) BOOL isCanceled;                   //@synthesize isCanceled=_isCanceled - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithIsCanceled:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)isCanceled;
-(NSError *)error;
@end
