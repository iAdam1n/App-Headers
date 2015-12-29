//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLMetaRpc.h"

@class NSString, TLInputPeer, TLMessagesFilter;

@interface TLRPCmessages_search : TLMetaRpc
{
    int _flags;
    int _min_date;
    int _max_date;
    int _offset;
    int _max_id;
    int _limit;
    TLInputPeer *_peer;
    NSString *_q;
    TLMessagesFilter *_filter;
}

@property(nonatomic) int limit; // @synthesize limit=_limit;
@property(nonatomic) int max_id; // @synthesize max_id=_max_id;
@property(nonatomic) int offset; // @synthesize offset=_offset;
@property(nonatomic) int max_date; // @synthesize max_date=_max_date;
@property(nonatomic) int min_date; // @synthesize min_date=_min_date;
@property(retain, nonatomic) TLMessagesFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) NSString *q; // @synthesize q=_q;
@property(retain, nonatomic) TLInputPeer *peer; // @synthesize peer=_peer;
@property(nonatomic) int flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;
- (int)layerVersion;
- (int)impliedResponseSignature;
- (Class)responseClass;

@end
