/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBMagicStoryCollectionDataSourceDelegate <NSObject>
@required
-(void)magicStoryCollectionDataSourceDidUpdateTitle:(id)arg1;
-(void)magicStoryCollectionDataSourceDidTapAddButton:(id)arg1;
-(void)magicStoryCollectionDataSourceDidTapEditButton:(id)arg1;
-(void)magicStoryCollectionDataSource:(id)arg1 didSelectAsset:(id)arg2 atRect:(CGRect)arg3 sourceView:(id)arg4;
-(void)magicStoryCollectionDataSource:(id)arg1 didSwapAsset:(id)arg2 withAsset:(id)arg3 inCollection:(id)arg4;
-(void)magicStoryCollectionDataSource:(id)arg1 didRemoveAsset:(id)arg2 inCollection:(id)arg3;
-(void)magicStoryCollectionDataSource:(id)arg1 didSetHeaderToAsset:(id)arg2 inCollection:(id)arg3;
-(void)magicStoryCollectionDataSource:(id)arg1 didBegingEditingTextInView:(id)arg2;
-(void)magicStoryCollectionDataSource:(id)arg1 didEndEditingTextInView:(id)arg2;
-(void)magicStoryCollectionDataSource:(id)arg1 didConfigureCell:(id)arg2 atIndexPath:(id)arg3;
-(void)magicStoryCollectionDataSource:(id)arg1 willConfigureCell:(id)arg2 atIndexPath:(id)arg3;

@end

