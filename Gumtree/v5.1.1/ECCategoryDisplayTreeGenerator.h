/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ECCategoryDisplayTreeGenerator : NSObject
+(id)generateCategoryTreeWithSelectedCategoryID:(id)arg1 displayedTreeNode:(id*)arg2 isPost:(BOOL)arg3 categoryManager:(id)arg4 histogram:(id)arg5 ;
+(id)categoryNodeWithCategoryID:(id)arg1 parentNode:(id)arg2 navNodes:(id)arg3 selectedCategoryID:(id)arg4 displayedTreeNode:(id*)arg5 isPost:(BOOL)arg6 level:(unsigned long long)arg7 categoryManager:(id)arg8 histogram:(id)arg9 ;
+(BOOL)canBeSelectedCategoryID:(id)arg1 whenInPost:(BOOL)arg2 categoryManager:(id)arg3 ;
@end

