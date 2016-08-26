/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPageableItem <FBPageableItemViewStatePersistence>
@property (assign,nonatomic) BOOL supportsOrientationRotation; 
@optional
-(void)prepareForPagingInContext:(unsigned long long)arg1 inOrientation:(long long)arg2 withPagingGestureRecognizer:(id)arg3;
-(void)cleanUpAfterPaging;
-(void)didBeginMoving;
-(void)maySettleAsActivePage;
-(void)didSettleAsActivePage;
-(void)didSettleAsInactivePage;
-(void)didEnterPagingRange;
-(void)didExitPagingRange;
-(CGSize*)pageableDimensionsForOrientation:(long long)arg1;
-(BOOL)shouldBeginPagingGesture:(id)arg1 inDirection:(long long)arg2;
-(BOOL)supportsOrientationRotation;
-(void)setSupportsOrientationRotation:(BOOL)arg1;

@end
