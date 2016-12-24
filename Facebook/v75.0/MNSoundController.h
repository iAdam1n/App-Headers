/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSoundControllerPlayStrategy;
@class NSMutableArray;

@interface MNSoundController : NSObject {

	NSMutableArray* _soundsFromSoundName;
	id<MNSoundControllerPlayStrategy> _soundPlayStrategy;

}
-(BOOL)_inAppSoundsAllowed;
-(BOOL)_inAppVibrateAllowed;
-(id)initWithSoundPlayStrategy:(id)arg1 ;
-(void)stopSound:(long long)arg1 reset:(BOOL)arg2 ;
-(void)playSound:(long long)arg1 ;
-(void)playSystemSound:(unsigned)arg1 ;
@end
