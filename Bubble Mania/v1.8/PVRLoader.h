/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/ImageLoader.h>

@interface PVRLoader : ImageLoader
-(BOOL)directToDescriptor:(id)arg1 forBlockHeader:(SCD_Struct_Al200*)arg2 data:(char*)arg3 ;
-(id)parsePvrWithBuffer:(char*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 ;
@end

