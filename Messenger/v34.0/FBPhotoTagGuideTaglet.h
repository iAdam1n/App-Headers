/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBTaglet.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class FBTagGuideView, UITapGestureRecognizer, FBMemFaceBox, NSString;

@interface FBPhotoTagGuideTaglet : FBTaglet <UIGestureRecognizerDelegate> {

	FBTagGuideView* _tagGuideView;
	UITapGestureRecognizer* _tapRecognizer;
	FBMemFaceBox* _facebox;

}

@property (nonatomic,readonly) FBMemFaceBox * facebox;                                       //@synthesize facebox=_facebox - In the implementation block
@property (assign,nonatomic,__weak) id<FBPhotoTagGuideTagletDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_tagViewWasTapped:(id)arg1 ;
-(FBMemFaceBox *)facebox;
-(id)initWithFaceBox:(id)arg1 delegate:(id)arg2 session:(id)arg3 ;
-(void)dealloc;
-(id)view;
@end
