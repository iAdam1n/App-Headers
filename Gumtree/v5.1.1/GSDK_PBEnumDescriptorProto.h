/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GSDK_PBGeneratedMessage.h>

@class NSString, GSDK_PBMutableArray, GSDK_PBEnumOptions;

@interface GSDK_PBEnumDescriptorProto : GSDK_PBGeneratedMessage

@property (assign,nonatomic) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) BOOL hasValueArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * valueArray; 
@property (assign,nonatomic) BOOL hasOptions; 
@property (nonatomic,retain) GSDK_PBEnumOptions * options; 
+(id)descriptor;
@end
