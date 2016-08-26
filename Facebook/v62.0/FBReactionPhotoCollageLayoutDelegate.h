/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPhotoCollageCollectionViewLayoutDelegate.h>

@protocol FBReactionPhotoStore;
@class NSString;

@interface FBReactionPhotoCollageLayoutDelegate : NSObject <FBPhotoCollageCollectionViewLayoutDelegate> {

	id<FBReactionPhotoStore> _photoStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 hasLoadingCellInSection:(long long)arg3 ;
-(id)initWithPhotoStore:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end
