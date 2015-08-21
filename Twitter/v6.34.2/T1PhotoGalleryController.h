/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol T1PhotoGalleryControllerDelegate;
@class NSString;

@interface T1PhotoGalleryController : NSObject <UICollectionViewDelegateFlowLayout> {

	id<T1PhotoGalleryControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<T1PhotoGalleryControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<T1PhotoGalleryControllerDelegate>)arg1 ;
-(id<T1PhotoGalleryControllerDelegate>)delegate;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
@end

