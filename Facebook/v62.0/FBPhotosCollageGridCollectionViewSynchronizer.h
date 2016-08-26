/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
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
