/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface ECCategoryDisplayTreeGenerator : NSObject
+(id)generateCategoryTreeWithSelectedCategoryID:(id)arg1 displayedTreeNode:(id*)arg2 isPost:(BOOL)arg3 categoryManager:(id)arg4 ;
+(id)categoryNodeWithCategoryID:(id)arg1 parentNode:(id)arg2 navNodes:(id)arg3 selectedCategoryID:(id)arg4 displayedTreeNode:(id*)arg5 isPost:(BOOL)arg6 level:(unsigned long long)arg7 categoryManager:(id)arg8 ;
+(BOOL)canBeSelectedCategoryID:(id)arg1 whenInPost:(BOOL)arg2 categoryManager:(id)arg3 ;
@end
