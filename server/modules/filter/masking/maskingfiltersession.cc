/*
 * Copyright (c) 2016 MariaDB Corporation Ab
 *
 * Use of this software is governed by the Business Source License included
 * in the LICENSE.TXT file and at www.mariadb.com/bsl.
 *
 * Change Date: 2019-07-01
 *
 * On the date above, in accordance with the Business Source License, use
 * of this software will be governed by version 2 or later of the General
 * Public License.
 */

#include "maskingfiltersession.hh"
#include <maxscale/filter.hh>


MaskingFilterSession::MaskingFilterSession(SESSION* pSession)
    : maxscale::FilterSession(pSession)
{
}

MaskingFilterSession::~MaskingFilterSession()
{
}

//static
MaskingFilterSession* MaskingFilterSession::create(SESSION* pSession)
{
    return new MaskingFilterSession(pSession);
}
