/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GSDK_PBField.h>

@interface GSDK_PBMutableField : GSDK_PBField
-(void)mergeFromField:(id)arg1 ;
-(void)addVarint:(unsigned long long)arg1 ;
-(void)addFixed32:(unsigned)arg1 ;
-(void)addFixed64:(unsigned long long)arg1 ;
-(void)addLengthDelimited:(id)arg1 ;
-(void)addGroup:(id)arg1 ;
-(id)initWithNumber:(int)arg1 ;
@end

