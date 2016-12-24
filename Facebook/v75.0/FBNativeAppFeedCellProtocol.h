/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBUserSession, FBMemDigitalGoodFeedUnitItem, NSIndexPath;


@protocol FBNativeAppFeedCellProtocol <NSObject>
@property (nonatomic,retain) FBUserSession * session; 
@property (nonatomic,retain) FBMemDigitalGoodFeedUnitItem * feedUnit; 
@property (assign,nonatomic,__weak) id<FBNativeAppFeedCellDelegate> delegate; 
@property (nonatomic,retain) NSIndexPath * indexPath; 
@required
-(FBMemDigitalGoodFeedUnitItem *)feedUnit;
-(void)setFeedUnit:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<FBNativeAppFeedCellDelegate>)delegate;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(id)arg1;
-(void)setSession:(id)arg1;
-(FBUserSession *)session;

@end
