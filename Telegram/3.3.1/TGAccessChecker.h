//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TGAccessChecker : NSObject
{
}

+ (_Bool)checkLocationAuthorizationStatusForIntent:(int)arg1 alertDismissComlpetion:(CDUnknownBlockType)arg2;
+ (_Bool)checkCameraAuthorizationStatusWithAlertDismissComlpetion:(CDUnknownBlockType)arg1;
+ (_Bool)checkMicrophoneAuthorizationStatusForIntent:(int)arg1 alertDismissCompletion:(CDUnknownBlockType)arg2;
+ (_Bool)checkPhotoAuthorizationStatusForIntent:(int)arg1 alertDismissCompletion:(CDUnknownBlockType)arg2;
+ (_Bool)checkAddressBookAuthorizationStatusWithAlertDismissComlpetion:(CDUnknownBlockType)arg1;

@end
