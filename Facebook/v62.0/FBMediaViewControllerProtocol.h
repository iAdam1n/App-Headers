/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaViewControllerProtocol <FBMediaGridPresentableViewControllerProtocol>
@required
-(void)willPresentMediaAtDataSourceIndex:(unsigned long long)arg1 fromCamera:(BOOL)arg2 showAll:(BOOL)arg3 allowPaging:(BOOL)arg4 showTaggingMode:(BOOL)arg5 source:(unsigned long long)arg6 forDataSource:(id)arg7 photoAssetDoesNotNeedRecycle:(BOOL)arg8;
-(BOOL)hasMultiSelectSupport;
-(unsigned long long)presentationAssetType;

@end
