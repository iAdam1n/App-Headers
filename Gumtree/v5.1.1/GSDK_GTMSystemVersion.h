/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GSDK_GTMSystemVersion : NSObject
+(void)getMajor:(int*)arg1 minor:(int*)arg2 bugFix:(int*)arg3 ;
+(BOOL)isBuildLessThan:(id)arg1 ;
+(BOOL)isBuildLessThanOrEqualTo:(id)arg1 ;
+(BOOL)isBuildGreaterThan:(id)arg1 ;
+(BOOL)isBuildGreaterThanOrEqualTo:(id)arg1 ;
+(BOOL)isBuildEqualTo:(id)arg1 ;
+(id)runtimeArchitecture;
+(void)initialize;
+(id)build;
@end
