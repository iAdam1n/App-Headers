/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollComponentScrolling.h>
#import <Facebook/FBHScrollComponentRelayouting.h>

@class FBHScrollComponent;

@interface FIGCardContentHScrollComponent : CKCompositeComponent <FBHScrollComponentScrolling, FBHScrollComponentRelayouting> {

	FBHScrollComponent* _hscrollComponent;

}
+(id)newWithStyle:(unsigned long long)arg1 children:(vector<CKComponent<FIGCardContentHScrollChildCompliant> *, std::__1::allocator<CKComponent<FIGCardContentHScrollChildCompliant> *> >*)arg2 options:(const FIGCardContentHScrollOptions*)arg3 ;
-(void)scrollToComponentAtIndex:(unsigned long long)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)scrollToNextFromContainedComponent:(id)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)relayoutIfNeeded;
-(BOOL)scrollInDirection:(unsigned long long)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)scrollToPreviewNextComponentWithDelay:(double)arg1 andBackWithDelay:(double)arg2 ;
@end
