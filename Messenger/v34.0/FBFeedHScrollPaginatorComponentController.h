/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/CKComponentController.h>

@interface FBFeedHScrollPaginatorComponentController : CKComponentController {

	unsigned long long _currentDotIndex;
	BOOL _showLeftArrow;
	BOOL _showRightArrow;

}
-(void)didMount;
-(void)didRemount;
-(void)didUpdateComponent;
-(void)updateDotsWithCurrentDotIndex:(unsigned long long)arg1 ;
-(void)updateArrowsWithShowLeftArrow:(BOOL)arg1 showRightArrow:(BOOL)arg2 shouldPulseArrow:(BOOL)arg3 ;
-(void)updatePaginatorWithCurrentDotIndex:(unsigned long long)arg1 showLeftArrow:(BOOL)arg2 showRightArrow:(BOOL)arg3 shouldPulseArrow:(BOOL)arg4 ;
@end

