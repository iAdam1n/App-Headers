/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInvalidating.h>

@class UICollectionView, NSMutableArray, NSString;

@interface FBPhotosCollageGridCollectionViewSynchronizer : NSObject <FBInvalidating> {

	UICollectionView* _collectionView;
	BOOL _performingUpdates;
	NSMutableArray* _updates;
	BOOL _valid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(void)_tryNextUpdate;
-(void)invalidate;
-(BOOL)isValid;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithCollectionView:(id)arg1 ;
@end
