/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface RTCAudioInterruptionHandlerForAudioDeviceSplit : NSObject {

	AudioDeviceIPhoneSplit* _owner;

}
-(void)registerHandlers;
-(void)unregisterHandlers;
-(void)audioSessionInterrupted:(id)arg1 ;
-(void)dealloc;
-(void)setOwner:(AudioDeviceIPhoneSplit*)arg1 ;
-(id)initWithOwner:(AudioDeviceIPhoneSplit*)arg1 ;
@end
